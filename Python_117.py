def select_words(input_string, count):
    words = input_string.split()
    result = [word for word in words if sum(1 for char in word.lower() if not 'aeiou'.__contains__(char)) == count]
    return result