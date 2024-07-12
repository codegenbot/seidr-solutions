try:
    n = int(input("Enter a number to factorize: "))
except EOFError:
    print("\nExiting program due to unexpected input.")
    exit()