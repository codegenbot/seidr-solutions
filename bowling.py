
[SEED]
# Write your initial solution here
import re
def bowling(s):
    """
    :param s: string representing a 10-frame round of 10 pin bowling
    :return: score of the round
    """
    pass
[/SEED]
class TestCase():
    def __init__(self, seed, f_name, f_args, f_ret):
        self.seed = seed
        self.f_name = f_name
        self.f_args = f_args
        self.f_ret  = f_ret
class Test():
    def __init__(self):
        self.test_cases = []
        self.add_test_case('XXXXXXXXXXXX', 'bowling', ('XXXXXXXXXXXX',), 300)
        self.add_test_case('5/5/5/5/5/5/5/5/5/5/5', 'bowling', ('5/5/5/5/5/5/5/5/5/5/5',), 150)
        self.add_test_case('7115XXX548/279-X53', 'bowling', ('7115XXX548/279-X53',), 145)
        self.add_test_case('532/4362X179-41447/5', 'bowling', ('532/4362X179-41447/5',), 100)
    def add_test_case(self, seed, f_name, f_args, f_ret):
        self.test_cases.append(TestCase(seed, f_name, f_args, f_ret))
[SYS]
# Generate random string of length 20
import random
def gen_random_string():
    return ''.join([chr(ord('a')+random.randint(0,25)) for i in range(20)])
# Generate a random test case
def gen_test_case():
    seed = gen_random_string()
    bowling_str = ''
    score = 0
    for i in range(10):
        if i == 9:
            bowling_str += str(score)
            break
        if not bowling_str or bowling_str[-1] == '/':
            score = random.randint(0, 10)
            bowling_str += str(score)
        else:
            if score == 10:
                bowling_str += 'X'
            else:
                score = min(score+random.randint(0, 10-score), 10)
                bowling_str += str(score)
            if score < 10:
                bowling_str += random.choice(['/', '-'])
    return seed, 'bowling', (bowling_str,), int(re.search('[0-9]+$', bowling_str).group())
# Execute the test case using function <f_name> with arguments <args>.
def execute_test_case(seed, f_name, args):
    import sys
    import os
    import inspect
    os.environ['PYTHONHASHSEED'] = str(seed)
    # Use the same directory of this file as working directory
    os.chdir(os.path.dirname(os.path.abspath(inspect.getsourcefile(lambda:0))))
    # Add ../runtime/ to sys.path for runtime module import
    sys.path.append('../runtime/')
    # Import runtime main module
    import runtime as rt
    # Capture stdout print output
    rt.set_sys_stdout()
    # Do the actual function call
    ret = None
    try:
        if args:
            ret = eval(f_name + '(' + args + ')')
        else:
            ret = eval(f_name + '()')
    except:
        pass
    return ret, rt.get_sys_stdout(), rt.get_sys_stderr()
[/SYS]
# Generate test cases
test = Test()
for i in range(10):
    seed, f_name, args, ans = gen_test_case()
    test.add_test_case(seed, f_name, str(args), ans)
[CHK]
import sys
def check_solution():
    # Test Case 1
    if bowling('XXXXXXXXXXXX') != 300:
        return False
    # Test Case 2
    if bowling('5/5/5/5/5/5/5/5/5/5/5') != 150:
        return False
    # Test Case 3
    if bowling('7115XXX548/279-X53') != 145:
        return False
    # Test Case 4
    if bowling('532/4362X179-41447/5') != 100:
        return False
    return True
[/CHK]
# Solution
def bowling(s):
    """
    :param s: string representing the individual bowls in a 10-frame round of 10 pin bowling
    :return: score of the round
    """
    score = 0
    for i in range(10):
        if not s or s[0] == '/':
            break
        elif s[0] == '-':
            score += int(s[1])
            s = s[2:]
        else:
            strike_extra = 0
            if s[0] == 'X':
                strike_extra = 2
            try:
                if s[1] == '/':
                    strike_extra = 1
                elif s[1] == '-':
                    strike_extra = 1 + int(s[2])
                else:
                    strike_extra = int(s[1])
            except IndexError:
                pass
            score += 10 + strike_extra
            s = s[1:]
        if i < 9 and not s:
            break
        elif i < 9 and (s[0] == '/' or s[0] == '-'):
            score += int(re.search('^[0-9]+', s).group())
            s = s[1:]
    return score
