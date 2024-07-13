def sorted_list_sum():
    lst = input("Enter a list of words separated by space: ").split()
    return "".join(sorted([word for word in lst], key=lambda x: (len(x), x)))