
def count_up_to(n):
    prime_numbers = []
    for i in range(2, n + 1):
        if all(i % j != 0 for j in range(2, int(i**0.5) + 1)):
            prime_numbers.append(i)
    return prime_numbers

def test_count_up_to():
    assert count_up_to(10) == [2, 3, 5, 7]
    assert count_up_to(100) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
    assert count_up_to(20) == [2, 3, 5, 7, 11, 13, 17, 19]