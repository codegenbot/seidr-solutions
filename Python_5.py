def check():
    def add_delimiter(numbers, delimiter):
        return delimiter.join(str(num) for num in numbers)

    numbers = [1, 2, 3, 4]
    delimiter = ","
    output = add_delimiter(numbers, delimiter)
    print(output)

check()