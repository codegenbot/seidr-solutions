```
import re

text = input("Enter the text: ")
target = input("Enter the target string: ")
result = [m.start() for m in re.finditer(target, text)]
print(list(map(int, result)))