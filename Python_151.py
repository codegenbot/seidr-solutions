def check(double_the_difference):
    result = double_the_difference([1,2,3,4,5])
    assert result == [10], f"Expected {result} to equal [10]"
    print("Test passed!")