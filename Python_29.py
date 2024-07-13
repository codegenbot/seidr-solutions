def filter_by_prefix(lst):
    prefix = input("Enter a prefix: ")
    return [word for word in lst if word.startswith(prefix)]


def check():
    words = ["apple", "banana", "apricot", "avocado"]
    print(filter_by_prefix(words))