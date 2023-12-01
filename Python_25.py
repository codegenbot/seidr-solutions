def solve(n):
    # your code logic here to solve the problem
    result = n * 2  # for example
    return result


def main():
    n = int(input())  # read the input n
    result = solve(n)  # call solve() function with n as argument
    print(result)  # print the result


if __name__ == "__main__":
    main()