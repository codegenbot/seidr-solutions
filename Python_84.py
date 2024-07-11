def convert_to_binary(N):
    return "".join(str((N // (10**i)) % 2) for i in reversed(range(len(str(N)))))

if __name__ == "__main__":
    N = int(input("Enter a number: "))
    print(int(convert_to_binary(N), 2))