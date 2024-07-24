def solve(N):
    filename = input("Enter a filename: ")
    if not all(char.isalnum() or char in "_.-" for char in filename):
        print("Invalid characters in the filename.")
    else:
        print(filename)