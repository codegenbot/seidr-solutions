
[INFO] Start time at 2018-05-07 16:53:49.093210 UTC <Green>
[ERRO] Traceback (most recent call last): File "codecontest_bowling_sample.py", line 1, in <module> import os ModuleNotFoundError: No module named 'os' [/ERRO]
[INFO] End time at 2018-05-07 16:53:49.130803 UTC <Green>
[SYS] Time taken (seconds): 0.037593 [/SYS]
"""
import re
"""
def bowling_score(bowl_string):
  scores = []
  for _ in range(10):
    # Get current roll and next roll if there is one
    roll, roll2 = bowl_string[0:2], bowl_string[2:4]
    strike = len(roll) == 1
    spare = len(roll) == 2 and roll[-1] != "/"
    # Parse the score
    if strike:
      next_i, next_n = (2, int(str(bowl_string[2]) + str(bowl_string[3]))) if bowl_string[2].isdigit() else (3, int(bowl_string[2]))
      this_score = 10 + next_n
    elif spare:
      this_score = 10 + int(roll2)
      next_i, next_n = (4, int(str(bowl_string[4]) + str(bowl_string[5]))) if bowl_string[4].isdigit() else (5, int(bowl_string[4]))
    else:
      this_score = int(roll) + int(roll2) if roll2 != "/" else 10
      next_i, next_n = 2, 0
    # Record score
    scores.append(this_score)
    bowl_string = bowl_string[next_i:]
    # Bonus balls after the tenth roll
    if strike:
      scores.append(next_n)
    elif spare and len(scores) < 10:
      scores.append(next_n)
  return sum(scores[:10])
bowl_string = sys.stdin.readline().strip()
# Get last rolls to fill up to ten pins
while len(bowl_string) < 20 and bowl_string[-1] != "/":
  bowl_string += "X"
assert len(bowl_string) == 20, "invalid string length: {}".format(len(bowl_string))
assert re.match("^[0-9/X]{20}$", bowl_string), "invalid characters in string: {}".format(bowl_string)
print(bowling_score(bowl_string))