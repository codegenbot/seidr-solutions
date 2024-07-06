def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if len(stack) == 0:
                    return "No"
                stack.pop()
    return "Yes" if len(stack) == 0 else "No"


def main():
    n = int(input("Enter the number of strings: "))
    lst = []
    for _ in range(n):
        s = input("Enter a string: ")
        lst.append(s)

    print(match_parens(lst))