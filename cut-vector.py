"""
Given a string s, return the length of the longest substring t that contains at most 2 distinct characters.
Example 1:
Input: "eceba"
Output: 3
Explanation: t is "ece" which its length is 3.
Example 2:
Input: "ccaabbb"
Output: 5
Explanation: t is "aabbb" which its length is 5.
"""
if __name__ == '__main__':
    s = "ccaabbb"
    if len(s) == 1:
        print(1)
    else:
        print(2)
