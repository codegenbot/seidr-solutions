

def sum_to_n(n: int):
    """sum_to_n is a function that sums numbers from 1 to n.
    >>> sum_to_n(30)
    465
    >>> sum_to_n(100)
    5050
    >>> sum_to_n(5)
    15
    >>> sum_to_n(10)
    55
    >>> sum_to_n(1)
    1
    if n == 0:
        return 0
    else:
        return n + sum_to_n(n - 1)


def count_vowels(word: str):
    """count_vowels is a function that sums the number of vowels in a word.
    >>> count_vowels("hello")
    2
    >>> count_vowels("world")
    1
    >>> count_vowels("apple")
    2
    >>> count_vowels("banana")
    3
    >>> count_vowels("computer")
    3
    """
    if word == "":
        return 0
    else:
        if word[0].lower() in "aeiou":
            return 1 + count_vowels(word[1:])
        else:
            return count_vowels(word[1:])


def find_max(numbers: list):
    """find_max is a function that finds the maximum number in a list of numbers.
    >>> find_max([1, 2, 3, 4, 5])
    5
    >>> find_max([6, 7, 8, 9, 10])
    10
    >>> find_max([15, 20, 25, 30, 35])
    35
    >>> find_max([100, 101, 102, 103, 104])
    104
    >>> find_max([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    10
    """
    if len(numbers) == 1:
        return numbers[0]
    else:
        if numbers[0] > numbers[1]:
            return find_max([numbers[0]] + numbers[2:])
        else:
            return find_max(numbers[1:])


def find_min(numbers: list):
    """find_min is a function that finds the minimum number in a list of numbers.
    >>> find_min([1, 2, 3, 4, 5])
    1
    >>> find_min([6, 7, 8, 9, 10])
    6
    >>> find_min([15, 20, 25, 30, 35])
    15
    >>> find_min([100, 101, 102, 103, 104])
    100
    >>> find_min([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    1
    """
    if len(numbers) == 1:
        return numbers[0]
    else:
        if numbers[0] < numbers[1]:
            return find_min([numbers[0]] + numbers[2:])
        else:
            return find_min(numbers[1:])


def find_max_min(numbers: list):
    """find_max_min is a function that finds the maximum and minimum numbers in a list of numbers.
    >>> find_max_min([1, 2, 3, 4, 5])
    [5, 1]
    >>> find_max_min([6, 7, 8, 9, 10])
    [10, 6]
    >>> find_max_min([15, 20, 25, 30, 35])
    [35, 15]
    >>> find_max_min([100, 101, 102, 103, 104])
    [104, 100]
    >>> find_max_min([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    [10, 1]
    """
    return [find_max(numbers), find_min(numbers)]


def find_max_min_index(numbers: list):
    """find_max_min_index is a function that finds the maximum and minimum numbers in a list of numbers.
    >>> find_max_min_index([1, 2, 3, 4, 5])
    [4, 0]
    >>> find_max_min_index([6, 7, 8, 9, 10])
    [4, 0]
    >>> find_max_min_index([15, 20, 25, 30, 35])
    [4, 0]
    >>> find_max_min_index([100, 101, 102, 103, 104])
    [4, 0]
    >>> find_max_min_index([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    [9, 0]
    """
    return [numbers.index(find_max(numbers)), numbers.index(find_min(numbers))]


def find_max_min_index_2(numbers: list):
    """find_max_min_index_2 is a function that finds the maximum and minimum numbers in a list of numbers.
    >>> find_max_min_index_2([1, 2, 3, 4, 5])
    [4, 0]
    >>> find_max_min_index_2([6, 7, 8, 9, 10])
    [4, 0]
    >>> find_max_min_index_2([15, 20, 25, 30, 35])
    [4, 0]
    >>> find_max_min_index_2([100, 101, 102, 103, 104])
    [4, 0]
    >>> find_max_min_index_2([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    [9, 0]
    """
    max_num = numbers[0]
    max_index = 0
    min_num = numbers[0]
    min_index = 0
    for i in range(len(numbers)):
        if numbers[i] > max_num:
            max_num = numbers[i]
            max_index = i
        if numbers[i] < min_num:
            min_num = numbers[i]
            min_index = i
    return [max_index, min_index]


def find_max_min_index_3(numbers: list):
    """find_max_min_index_3 is a function that finds the maximum and minimum numbers in a list of numbers.
    >>> find_max_min_index_3([1, 2, 3, 4, 5])
    [4, 0]
    >>> find_max_min_index_3([6, 7, 8, 9, 10])
    [4, 0]
    >>> find_max_min_index_3([15, 20, 25, 30, 35])
    [4, 0]
    >>> find_max_min_index_3([100, 101, 102, 103, 104])
    [4, 0]
    >>> find_max_min_index_3([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
    [9, 0]
    """
    return [numbers.index(max(numbers)), numbers.index(min(numbers))]


if __name__ == "__main__":
    import doctest

    doctest.testmod()
    """
