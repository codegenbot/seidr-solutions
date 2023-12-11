
import re

def get_score(bowl_string):
    score = 0
    for i in range(len(bowl_string)):
        if bowl_string[i] == 'X':
            score += 10
        elif bowl_string[i] == '/':
            score += 10 - int(bowl_string[i-1])
        else:
            score += int(bowl_string[i])
    return score

def main():
    test_cases = [
        "XXXXXXXXXXXX",
        "5/5/5/5/5/5/5/5/5/5/5",
        "7115XXX548/279-X53",
        "532/4362X179-41447/5"
    ]
    for test_case in test_cases:
        print(get_score(test_case))

if __name__ == "__main__":
    main()