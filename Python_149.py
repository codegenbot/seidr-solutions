def sorted_list_sum():
    lst = input("Enter list of words: ").split()
    digits = [int(word) for word in lst if word.isdigit()]
    result = [" ".join(map(str, sorted(digits)))]
    print(result)