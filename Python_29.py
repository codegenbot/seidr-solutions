```
def check():
    prefix = input("Enter a prefix: ")
    if len(prefix) > 5:
        print("Prefix is too long")
    else:
        word_list = input("Enter a list of words (comma separated): ").split(',')
        for word in word_list:
            print(f"Filtering {word} by the prefix {prefix}")