if __name__ == "__main__":
    strings = [s.strip() for s in input("Enter the list of strings separated by commas: ").split(',')]
    print(longest(strings))