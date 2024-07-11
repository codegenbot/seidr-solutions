```
def check(solve):
    return "Hello" in solve()

def solve():
    user_input = input("Enter some data: ")
    return user_input

def main():
    result = solve()
    if check(result) == True:
        print("Valid input")
    else:
        print("Invalid input")

if __name__ == "__main__":
    main()