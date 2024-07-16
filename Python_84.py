```
import base64
import sys

def solve(N):
    if isinstance(N, str):
        return N
    elif N < 0:
        result = "-" + solve(-N)
    else:
        s = base64.b64encode(str(N).encode()).decode().upper()
        result = s.replace("=", "")

    print(result)

num = int(input("Enter a number: "))
solve(num)