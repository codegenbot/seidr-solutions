import base64

def solve(N):
    if isinstance(N, str):
        return N
    elif N < 0:
        return "-" + solve(-N)
    else:
        s = base64.b64encode(str(N).encode()).decode().upper()
        return s.replace("=", "")

num = input("Enter a number: ")
solve(int(num))