"""
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
"""


def score(string):
    score = 0
    for i in range(len(string)):
        if string[i] == '/':
            score += 10 - int(string[i - 1])
            if i < len(string) - 1:
                score += int(string[i + 1])
        elif string[i] == 'X':
            score += 10
            if i < len(string) - 1:
                score += int(string[i + 1])
            if i < len(string) - 2:
                score += int(string[i + 2])
        elif string[i] == '-':
            score += 0
        else:
            score += int(string[i])
    return score


if __name__ == '__main__':
