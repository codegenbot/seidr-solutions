```
import re
strings = input("Please enter a list of strings (separated by any character): ", encoding='utf-8', errors='replace')
strings = [i for i in re.split("([^\w\s]+)", strings) if i]
print("".join(strings))