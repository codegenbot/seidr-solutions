import sys
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
if __name__ == '__main__':
    bowling = sys.stdin.readline().rstrip()
    frame = []
    score = 0
    for i in range(len(bowling)):
        if bowling[i] == 'X':
            frame.append(10)
        elif bowling[i] == '-':
            frame.append(0)
        elif bowling[i] == '/':
            frame.append(10 - frame[-1])
        else:
            frame.append(int(bowling[i]))
    for i in range(10):
        if bowling[i*2] == 'X':
            if bowling[i*2+2] == 'X':
                score += frame[i*2] + frame[i*2+2] + frame[i*2+4]
            else:
                score += frame[i*2] + frame[i*2+2] + frame[i*2+3]
        elif bowling[i*2+1] == '/':
            score += frame[i*2] + frame[i*2+1] + frame[i*2+2]
        else:
            score += frame[i*2] + frame[i*2+1]
    print(score)
