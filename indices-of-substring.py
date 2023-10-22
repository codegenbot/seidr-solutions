import re
"""
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""


def find_occurences(text, target):
    indices = []
    pattern = re.compile(target)
    for match in re.finditer(pattern, text):
        indices.append(match.start())
    return indices

if __name__ == '__main__':
    occurrences = []
    for test in range(int(input())):
        text = input()
        pattern = input()
        occurrences.append(find_occurences(text, pattern))

    for occurence in occurrences:
        for index in occurence:
            print(index, end=" ")
        print()
