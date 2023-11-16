
def simplify(x, n):
    """Your task is to implement a function that will simplify the expression
    x * n. The function returns True if x * n evaluates to a whole number and False
    otherwise. Both x and n, are string representation of a fraction, and have the following format,
    <numerator>/<denominator> where both numerator and denominator are positive whole numbers.

    You can assume that x, and n are valid fractions, and do not have zero as denominator.

    # Your code here
    simplify("1/5", "5/1") = True
    x_numerator, x_denominator = x.split("/")
    n_numerator, n_denominator = n.split("/")
    x_numerator = int(x_numerator)
    x_denominator = int(x_denominator)
    n_numerator = int(n_numerator)
    n_denominator = int(n_denominator)
    if x_numerator * n_denominator == x_denominator * n_numerator:
        return True
    else:
        return False


def check(simplify):
    assert simplify("1/5", "1/5") == False, "test13"
    assert simplify("1/6", "2/1") == False, "test14"
    assert simplify("7/10", "10/2") == False, "test15"
    assert simplify("1/5", "5/1") == True, "test16"
    assert simplify("1/6", "1/6") == True, "test17"
    assert simplify("7/10", "1/10") == True, "test18"
    assert simplify("1/5", "1/6") == False, "test19"
    assert simplify("1/6", "1/5") == False, "test20"
    assert simplify("7/10", "1/5") == False, "test21"
    assert simplify("1/5", "1/5") == True, "test22"
    assert simplify("1/6", "1/6") == True, "test23"
    assert simplify("7/10", "1/10") == True, "test24"
    assert simplify("1/5", "1/6") == False, "test25"
    assert simplify("1/6", "1/5") == False, "test26"
    assert simplify("7/10", "1/5") == False, "test27"
    assert simplify("1/5", "1/5") == True, "test28"
    assert simplify("1/6", "1/6") == True, "test29"
    assert simplify("7/10", "1/10") == True, "test30"
    assert simplify("1/5", "1/6") == False, "test31"
    assert simplify("1/6", "1/5") == False, "test32"
    assert simplify("7/10", "1/5") == False, "test33"
    assert simplify("1/5", "1/5") == True, "test34"
    assert simplify("1/6", "1/6") == True, "test35"
    assert simplify("7/10", "1/10") == True, "test36"
    assert simplify("1/5", "1/6") == False, "test37"
    assert simplify("1/6", "1/5") == False, "test38"
    assert simplify("7/10", "1/5") == False, "test39"
    assert simplify("1/5", "1/5") == True, "test40"
    assert simplify("1/6", "1/6") == True, "test41"
    assert simplify("7/10", "1/10") == True, "test42"
    assert simplify("1/5", "1/6") == False, "test43"
    assert simplify("1/6", "1/5") == False, "test44"
    assert simplify("7/10", "1/5") == False, "test45"
    assert simplify("1/5", "1/5") == True, "test46"
    assert simplify("1/6", "1/6") == True, "test47"
    assert simplify("7/10", "1/10") == True, "test48"
    assert simplify("1/5", "1/6") == False, "test49"
    assert simplify("1/6", "1/5") == False, "test50"
    assert simplify("7/10", "1/5") == False, "test51"
    assert simplify("1/5", "1/5") == True, "test52"
    assert simplify("1/6", "1/6") == True, "test53"
    assert simplify("7/10", "1/10") == True, "test54"
    assert simplify("1/5", "1/6") == False, "test55"
    assert simplify("1/6", "1/5") == False, "test56"
    assert simplify("7/10", "1/5") == False, "test57"
    assert simplify("1/5", "1/5") == True, "test58"
    assert simplify("1/6", "1/6") == True, "test59"
    assert simplify("7/10", "1/10") == True, "test60"
    assert simplify("1/5", "1/6") == False, "test61"
    assert simplify("1/6", "1/5") == False, "test62"
    assert simplify("7/10", "1/5") == False, "test63"
    assert simplify("1/5", "1/5") == True, "test64"
    assert simplify("1/6", "1/6") == True, "test65"
    assert simplify("7/10", "1/10") == True, "test66"
    assert simplify("1/5", "1/6") == False, "test67"
    assert simplify("1/6", "1/5") == False, "test68"
    assert simplify("7/10", "1/5") == False, "test69"
    assert simplify("1/5", "1/5") == True, "test70"
    assert simplify("1/6", "1/6") == True, "test71"
    assert simplify("7/10", "1/10") == True, "test72"
    assert simplify("1/5", "1/6") == False, "test73"
    assert simplify("1/6", "1/5") == False, "test74"
    assert simplify("7/10", "1/5") == False, "test75"
    assert simplify("1/5", "1/5") == True, "test76"
    assert simplify("1/6", "1/6") == True, "test77"
    assert simplify("7/10", "1/10") == True, "test78"
    assert simplify("1/5", "1/6") == False, "test79"
    assert simplify("1/6", "1/5") == False, "test80"
    assert simplify("7/10", "1/5") == False, "test81"
    assert simplify("1/5", "1/5") == True, "test82"
    assert simplify("1/6", "1/6") == True, "test83"
    assert simplify("7/10", "1/10") == True, "test84"
    assert simplify("1/5", "1/6") == False, "test85"
    assert simplify("1/6", "1/5") == False, "test86"
    assert simplify("7/10", "1/5") == False, "test87"
    assert simplify("1/5", "1/5") == True, "test88"
    assert simplify("1/6", "1/6") == True, "test89"
    assert simplify("7/10", "1/10") == True, "test90"
    assert simplify("1/5", "1/6") == False, "test91"
    assert simplify("1/6", "1/5") == False, "test92"
    assert simplify("7/10", "1/5") == False, "test93"
    assert simplify("1/5", "1/5") == True, "test94"
    assert simplify("1/6", "1/6") == True, "test95"
    assert simplify("7/10", "1/10") == True, "test96"
    assert simplify("1/5", "1/6") == False, "test97"
    assert simplify
    simplify("1/6", "2/1") = False
    simplify("7/10", "10/2") = False
    """
