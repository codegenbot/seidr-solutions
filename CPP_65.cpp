```
def circular_shift(x, shift):
    digits = list(str(x))
    if shift > len(digits):
        return "".join(reversed(digits))
    else:
        return "".join(digits[shift:] + digits[:shift])

def test_circular_shift():
    assert circular_shift(12, 1) == "21"
    assert circular_shift(12, 2) == "12"
    assert circular_shift(123, 1) == "231"
    assert circular_shift(123, 2) == "312"
    assert circular_shift(123, 3) == "123"

if __name__ == '__main__':
    test_circular_shift()
```