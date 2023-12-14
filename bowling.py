
<<REPL>>
import os
import sys
# sys.stdin = open("/home/pradeepr/Desktop/cc.txt", "r")
# sys.stdout = open("output.txt","w")
class Bowling(object):
    def score(self, input_string):
        # your code goes here, it should return a single integer
        """
        532/4362X179-41447/5
        XXXXX 12
        X  30
        -  0
        2  10
        1  1
        7  3
        8  2
        /  10
        4  1
        6  2
        9  0
        10 30
        """
        # input_string = "-"
        score_table = {"X":30,"/":10,"-":0, "2":10, "1":1, "7": 3, "8":2, "9":0, "10":30}
        bowl_list = list(input_string)
        score_list = [int(x) if x.isdigit() else score_table[x] for x in bowl_list ]
        
        cumulative_score = []
        running_total = 0
        # print (len(bowl_list))
        i=1
        while i < len(bowl_list):
            if bowl_list[i] == "/":
                cumulative_score.append((running_total, score_table["/"]))
                running_total = 0
            elif bowl_list[i-1] == "X":
                running_total += score_list[i-1] + score_list[i-2] + score_list[i]
            else:
                if i > len(bowl_list)-3 and (score_table["/"] in set(bowl_list[-2:])):
                    running_total += score_list[i-1]
                    cumulative_score.append((running_total, 0))
                else:
                    running_total += score_list[i-1] + score_list[i]
            i+=1
        # print(sum([x[0]+x[1] for x in cumulative_score]))
        return sum([x[0]+x[1] for x in cumulative_score]) if len(cumulative_score) > 0 else running_total
if __name__ == '__main__':
    bowling = Bowling()
    print (bowling.score("-"))
<<TESTCASES>>
"""
### Input Test Case ###

import os
import sys
sys.stdin = open("input.txt", "r")
sys.stdout = open("output.txt","w")

### Output Test Case ###

100
"""