```python
import sys

while True:
    line = sys.stdin.readline().strip()
    if line == 'q':  
        break
    values = list(map(int, line.split()))
    result = [value for value in values if isinstance(value, int)]
    print(result)