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

def bowling_score(frames):
    scores = []
    for i in range(10):
        score = 0
        if frames[i*2] == 'X':
            score += 10
            if frames[i*2+2] == 'X':
                score += 10
                if i < 9 and frames[i*2+4] == 'X':
                    score += 10
                elif i < 9:
                    score += int(frames[i*2+4])
            else:
                score += int(frames[i*2+2])
                if frames[i*2+3] == '/':
                    score += 10
                else:
                    score += int(frames[i*2+3])
        elif frames[i*2+1] == '/':
            score += 10
            if frames[i*2+2] == 'X':
                score += 10
            else:
                score += int(frames[i*2+2])
        elif frames[i*2] == '-':
            score += 0
        else:
            score += int(frames[i*2])
            if frames[i*2+1] == '-':
                score += 0
            else:
                score += int(frames[i*2+1])
        scores.append(score)
    return sum(scores)

if __name__ == '__main__':
