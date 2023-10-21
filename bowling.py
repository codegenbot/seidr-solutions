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


def bowling_score(round):
    score = 0
    i = 0
    for frame in range(10):
        if round[i] == 'X':
            score += 10
            if round[i + 2] == 'X':
                score += 10
            elif round[i + 2] == '/':
                score += 10
            else:
                score += int(round[i + 2])
            if round[i + 1] == 'X':
                score += 10
            elif round[i + 1] == '/':
                score += 10
            else:
                score += int(round[i + 1])
            i += 1
        elif round[i] == '/':
            score += 10
            if round[i + 1] == 'X':
                score += 10
            else:
                score += int(round[i + 1])
            score += int(round[i - 1])
            i += 1
        elif round[i] == '-':
            score += 0
            i += 1
        else:
            if round[i + 1] == '/':
                score += 10
                score += int(round[i])
            else:
                score += int(round[i])
                if round[i + 1] == '-':
                    score += 0
                elif round[i + 1] == 'X':
                    score += 10
                else:
                    score += int(round[i + 1])
            i += 2
    return score


if __name__ == '__main__':
    # print bowling_score('XXXXXXXXXXXX')
    # print bowling_score('5/5/5/5/5/5/5/5/5/5/5')
    print bowling_score('7115XXX548/279-X53')
    # print bowling_score('532/4362X179-41447/5')
