```
def flip_case(str):
    return str.swapcase()

def main():
    input_string = "These violent delights have violent ends"
    expected_output = "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"
    assert (flip_case(input_string) == expected_output)
```