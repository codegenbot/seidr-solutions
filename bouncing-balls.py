
[SEED]
# copy and paste your code here on this line, only complete the code
def bouncing_balls(starting_height, first_bounce_height, num_of_bounces):
    if num_of_bounces < 0:
        return -1.0 #if negative bounces are requested, return invalid value
    elif starting_height <= 0 or first_bounce_height <= 0 or num_of_bounces == 0:
        return 0.0 #if invalid input is given, return zero distance traveled
    else:
        bounciness = first_bounce_height / starting_height
        if num_of_bounces > 1 and bounciness < 1.0: #If there are more than one bounce remaining and the ball is not already bounced to a height of zero
            for i in range(num_of_bounces - 2): #for every bounce after the first, the ball has half the bounciness index as the last bounce to calculate distance
                bounciness = (1.0 + bounciness) / 2.0 #calculate next bounciness for each bounce
        return num_of_bounces * bounciness
[/SEED]
>>>
# copy and paste your code here on this line, only complete the code
def bouncing_balls(starting_height, first_bounce_height, num_of_bounces):
    if num_of_bounces < 0:
        return -1.0 #if negative bounces are requested, return invalid value
    elif starting_height <= 0 or first_bounce_height <= 0 or num_of_bounces == 0:
        return 0.0 #if invalid input is given, return zero distance traveled
    else:
        bounciness = first_bounce_height / starting_height
        if num_of_bounces > 1 and bounciness < 1.0: #If there are more than one bounce remaining and the ball is not already bounced to a height of zero
            for i in range(num_of_bounces - 2): #for every bounce after the first, the ball has half the bounciness index as the last bounce to calculate distance
                bounciness = (1.0 + bounciness) / 2.0 #calculate next bounciness for each bounce
        return num_of_bounces * bounciness
# testing code
"""
Code Testing template from:
http://codepad.org/4D8NdM3T
"""

import sys
sys.path.insert(0, '/home/mark/Dropbox/programming/not_on_github/python/')
from print_time_stats import print_time_stats

tests = [[1.001, 1.0, 1], [100.0, 99.999, 20],[100.0, 1.0, 20],[15.319, 5.635, 1],[2.176, 1.787, 1]]

def run_tests(func):
    for t in tests:
        print "-----------------"
        out = func(t[0], t[1], t[2])
        print "%s(%s) => %f (correct answer is %.4f)" % (func.__name__, ", ".join([str(x) for x in t]), out, t[0] * t[2] - t[1] + 1.0 )

def main():
    print "Testing bouncing_balls"
    print_time_stats(run_tests, func=bouncing_balls)

if __name__ == '__main__':
    main()
