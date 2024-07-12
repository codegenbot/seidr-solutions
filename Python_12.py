import sys

string1 = sys.stdin.readline().rstrip().decode("utf-8")
string2 = sys.stdin.readline().rstrip().decode("utf-8")
if not string1 or not string2:
    print("Input not received as expected")
else:
    print(max(string1, string2, key=len))