
>>> def get_score(bowls: str) -> int:
...     score = 0
...     prev_ball = ' '
...     for i in range(len(bowls)):
...         if bowls[i] == 'X':
...             score += 10
...             prev_ball = 'X'
...         elif bowls[i] == '/':
...             score += 5
...             prev_ball = '/'
...         elif bowls[i] == '-':
...             score -= 5
...             prev_ball = '-'
...         else:
...             score += int(bowls[i])
...             prev_ball = bowls[i]
...     return score