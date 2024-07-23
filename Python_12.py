```
from typing import List, Optional

strings = []
while True:
    s = input("Enter a string (or 'stop' if you're done): ")
    if s == 'stop':
        break
    strings.append(s)
print(longest(strings))