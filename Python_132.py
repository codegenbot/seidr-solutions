
def is_nested(string):
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True
    is_nested('[]]]]]]][[[[[]') ➞ False
    is_nested('[][]') ➞ False
    is_nested('[]') ➞ False
    is_nested('[[][]]') ➞ True
    stack = []
    for char in string:
        if char == ']':
            if stack == []:
                return False
            stack.pop()
        elif char == '[':
            stack.append(char)
    return False if stack else True


def score(string):
    '''
    Create a function that takes a string as input and returns the total score for that string.
    The score of a string is the sum of the score of each individual character.
    The score of each character is the number of words that contain that character.
    The score of a word is the score of the character with the highest score.
    The score of a character is 0 if no words contain that character.

    score('hello') ➞ 8
    score('abc') ➞ 6
    score('ab') ➞ 4
    score('aeioubcdfg') ➞ 16
    score('aeiou') ➞ 5
    score('z') ➞ 0
    '''

    def get_score(char):
        score = 0
        for word in words:
            if char in word:
                score += 1
        return score

    words = string.split()
    scores = {}
    for word in words:
        for char in word:
            if char in scores:
                continue
            scores[char] = get_score(char)
    return sum(scores.values())


def get_total(num):
    '''
    Create a function that takes a number as an argument.
    Add up all the numbers from 1 to the number you passed to the function.
    For example, if the input is 4 then your function should return 10 because 1 + 2 + 3 + 4 = 10.

    get_total(6) ➞ 21
    get_total(13) ➞ 91
    get_total(600) ➞ 180300
    '''
    return num * (num + 1) // 2


def has_same_digit(num1, num2):
    '''
    Create a function that returns True if two numbers have the same digits,
    and False otherwise. The numbers will be passed in as two arguments.
    Return False if the numbers are not positive integers.

    has_same_digit(12, 22) ➞ True
    has_same_digit(18, 28) ➞ False
    has_same_digit(22, 222) ➞ False
    '''

    if not (isinstance(num1, int) and isinstance(num2, int)):
        return False
    if num1 < 0 or num2 < 0:
        return False
    num1 = str(num1)
    num2 = str(num2)
    return sorted(num1) == sorted(num2)


def is_valid_walk(walk):
    '''
    Create a function that returns True if a walk of exactly 10 minutes and only consists of the directions:
    n, s, e, w. Otherwise return False.

    is_valid_walk(['n','s','n','s','n','s','n','s','n','s']) ➞ True
    is_valid_walk(['w','e','w','e','w','e','w','e','w','e','w','e']) ➞ False
    is_valid_walk(['w']) ➞ False
    is_valid_walk(['n','n','n','s','n','s','n','s','n','s']) ➞ False
    '''
    return len(walk) == 10 and walk.count('n') == walk.count('s') and walk.count('w') == walk.count('e')


def is_valid_walk(walk):
    '''
    Create a function that returns True if a walk of exactly 10 minutes and only consists of the directions:
    n, s, e, w. Otherwise return False.

    is_valid_walk(['n','s','n','s','n','s','n','s','n','s']) ➞ True
    is_valid_walk(['w','e','w','e','w','e','w','e','w','e','w','e']) ➞ False
    is_valid_walk(['w']) ➞ False
    is_valid_walk(['n','n','n','s','n','s','n','s','n','s']) ➞ False
    '''
    return len(walk) == 10 and walk.count('n') == walk.count('s') and walk.count('w') == walk.count('e')


def is_valid_walk(walk):
    '''
    Create a function that returns True if a walk of exactly 10 minutes and only consists of the directions:
    n, s, e, w. Otherwise return False.

    is_valid_walk(['n','s','n','s','n','s','n','s','n','s']) ➞ True
    is_valid_walk(['w','e','w','e','w','e','w','e','w','e','w','e']) ➞ False
    is_valid_walk(['w']) ➞ False
    is_valid_walk(['n','n','n','s','n','s','n','s','n','s']) ➞ False
    '''
    return len(walk) == 10 and walk.count('n') == walk.count('s') and walk.count('w') == walk.count('e')


def is_valid_walk(walk):
    '''
    Create a function that returns True if a walk of exactly 10 minutes and only consists of the directions:
    n, s, e, w. Otherwise return False.

    is_valid_walk(['n','s','n','s','n','s','n','s','n','s']) ➞ True
    is_valid_walk(['w','e','w','e','w','e','w','e','w','e','w','e']) ➞ False
    is_valid_walk(['w']) ➞ False
    is_valid_walk(['n','n','n','s','n','s','n','s','n','s']) ➞ False
    '''
    return len(walk) == 10 and walk.count('n') == walk.count('s') and walk.count('w') == walk.count('e')
    is_nested('[[]][[') ➞ True
    '''
