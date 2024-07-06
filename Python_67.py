def fruit_distribution():
    n = int(input("Enter an integer: "))
    s = input("Enter your string: ")
    words = s.split()
    count_apples = 0
    for word in words:
        if 'apples' in word.lower(): 
            count_apples = int(''.join(filter(str.isdigit, word)))
            break
    return n - count_apples