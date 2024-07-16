```
import base64

def solve(N):
    if isinstance(N, str):
        try:
            N = int(base64.b64decode(N.encode()).decode())
        except (ValueError, TypeError):
            pass
    elif N < 0:
        result = "-" + solve(-N)
    else:
        s = base64.b64encode(str(N).encode()).decode().upper()
        result = s.replace("=", "")

    return result

while True:
    try:
        num = int(input("Enter a number: "))
        print(solve(num))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")