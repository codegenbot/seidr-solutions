

def main():
    """
<<TEST_CASE>> Solution.solution(1) == -1 <<END_TEST_CASE>>
<<TEST_CASE>> Solution.solution(-50) == 0 <<END_TEST_CASE>>
<<TEST_CASE>> Solution.solution(3, (-4)) == 2 <<END_TEST_CASE>>
<<TEST_CASE>> Solution.solution(7, (1, -100)) == 0 <<END_TEST_CASE>>
<<TEST_CASE>> Solution.solution(7, (9, -100)) == 1 <<END_TEST_CASE>>
<<TEST_CASE>> Solution.solution(7, (200, -95)) == 0 <<END_TEST_CASE>>
"""
    input = sys.stdin.readline()
    print("Input is:", input)
    nums = list(map(int, input.split()))
    print(Solution().solution(*nums))
<<SAGE>> def solution(*args):  # Sage implementation goes here
"""
<<SAGE_DOC>> """The function takes as argument a list of numbers and returns the index such that all previous elements in list sums up to a negative number. If no such element is found return -1"""
<<SAGE>>     if len(args)==0: return None
<<SAGE>>     nums = sorted(list(args))
<<SAGE>>     nums = [n for n in nums if n < 0]
<<SAGE>>     sum_nums = sum(nums[:-1])
<<SAGE>>     if (sum_nums > 0): return -1
<<SAGE>>     else: return args.index(nums[-1])
