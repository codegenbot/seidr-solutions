
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288



def special_factorial(n):
    # TODO: Complete the following code given the task description and function
    # signature.
    pass
    if n == 1:
        return 1
    else:
        return n * special_factorial(n-1)

def check(fn):
    assert special_factorial(1) == 1, "Test 1"
    assert special_factorial(2) == 2, "Test 2"
    assert special_factorial(3) == 12, "Test 3"
    assert special_factorial(4) == 288, "Test 4"
    assert special_factorial(5) == 34560, "Test 5"
    assert special_factorial(6) == 24883200, "Test 6"
    assert special_factorial(7) == 10897286400, "Test 7"
    assert special_factorial(8) == 331976518400, "Test 8"
    assert special_factorial(9) == 73677941708800, "Test 9"
    assert special_factorial(10) == 12062630774579200, "Test 10"
    assert special_factorial(11) == 1569275433840128000, "Test 11"
    assert special_factorial(12) == 167772160, "Test 12"
    assert special_factorial(13) == 15032385536, "Test 13"
    assert special_factorial(14) == 112400072756, "Test 14"
    assert special_factorial(15) == 68719476736, "Test 15"
    assert special_factorial(16) == 34359738368, "Test 16"
    assert special_factorial(17) == 161061273600, "Test 17"
    assert special_factorial(18) == 6871947673600, "Test 18"
    assert special_factorial(19) == 258520167388800, "Test 19"
    assert special_factorial(20) == 87960930222080, "Test 20"
    assert special_factorial(21) == 2593742460128000, "Test 21"
    assert special_factorial(22) == 72057594037928000, "Test 22"
    assert special_factorial(23) == 18014398509481984000, "Test 23"
    assert special_factorial(24) == 3628800000000000000, "Test 24"
    assert special_factorial(25) == 590295810358705651712, "Test 25"
    assert special_factorial(26) == 827240261886336764177, "Test 26"
    assert special_factorial(27) == 101559956668416, "Test 27"
    assert special_factorial(28) == 1125899906842624, "Test 28"
    assert special_factorial(29) == 1152921504606846976, "Test 29"
    assert special_factorial(30) == 1073741824, "Test 30"
    assert special_factorial(31) == 8589934592, "Test 31"
    assert special_factorial(32) == 64424509440, "Test 32"
    assert special_factorial(33) == 42949672960, "Test 33"
    assert special_factorial(34) == 26843545600, "Test 34"
    assert special_factorial(35) == 161061273600, "Test 35"
    assert special_factorial(36) == 9223372036854775808, "Test 36"
    assert special_factorial(37) == 5192296858534827, "Test 37"
    assert special_factorial(38) == 253530120045645880, "Test 38"
    assert special_factorial(39) == 1152921504606846976, "Test 39"
    assert special_factorial(40) == 51539607551, "Test 40"
    assert special_factorial(41) == 21474836480, "Test 41"
    assert special_factorial(42) == 85899345920, "Test 42"
    assert special_factorial(43) == 343597383680, "Test 43"
    assert special_factorial(44) == 1374389534720, "Test 44"
    assert special_factorial(45) == 5497558138880, "Test 45"
    assert special_factorial(46) == 21990232555520, "Test 46"
    assert special_factorial(47) == 87960930222080, "Test 47"
    assert special_factorial(48) == 35184372088832, "Test 48"
    assert special_factorial(49) == 140737488355328, "Test 49"
    assert special_factorial(50) == 562949953421312, "Test 50"
    assert special_factorial(51) == 2251799813685248, "Test 51"
    assert special_factorial(52) == 9007199254740992, "Test 52"
    assert special_factorial(53) == 36028797018963968, "Test 53"
    assert special_factorial(54) == 144115188075855872, "Test 54"
    assert special_factorial(55) == 576460752303423488, "Test 55"
    assert special_factorial(56) == 2305843009213693952, "Test 56"
    assert special_factorial(57) == 9223372036854775808, "Test 57"
    assert special_factorial(58) == 36893488147419103232, "Test 58"
    assert special_factorial(59) == 147573952589676412928, "Test 59"
    assert special_factorial(60) == 596046447753906250000, "Test 60"
    assert special_factorial(61) == 2384185791015625000000, "Test 61"
    assert special_factorial(62) == 9536743164062500000000, "Test 62"
    assert special_factorial(63) == 38146972656250000000000, "Test 63"
    assert special_factorial(64) == 152587890625000000000000, "Test 64"
    assert special_factorial(65) == 610351562500000000000000, "Test 65"
    assert special_factorial(66) == 244140625000000000000000, "Test 66"
    assert special_factorial(67) == 97656250000000000000000, "Test 67"
    assert special_factorial(68) == 39062500000000000000000, "Test 68"
    assert special_factorial(69) == 15625000000000000000000, "Test 69"
    assert special_factorial(70) == 62500000000000000000000, "Test 70"
    assert special_factorial(71) == 250000000000000000000000, "Test 71"
    assert special_factorial(72) == 1000000000000000000000000, "Test 72"
    assert special_factorial(73) == 4000000000000000000000000, "Test 73"
    assert special_factorial(74) == 16000000000000000000000000, "Test 74"
    assert special_factorial(75) == 64000000000000000000000000, "Test 75"
    assert special_factorial(76) == 256000000000000000000000000, "Test 76"
    assert special_factorial(77) == 1024000000000000000000000000, "Test 77"
    assert special_factorial(78) == 4096000000000000000000000000, "Test 78"
    assert special_factorial(79) == 16384000000000000000000000000, "Test 79"
    assert special_factorial(80) == 65536000000000000000000000000, "Test 80"
    assert special_factorial(81) == 262144000000000000000000000000, "Test 81"
    assert special_factorial(82) == 1048576000000000000000000000000, "Test 82"
    assert special_factorial(83) == 4194304000000000000000000000000, "Test 83"
    assert special_factorial(84) == 16777216000000000000000000000000, "Test 84"
    assert special_factorial(85) == 67108864000000000000000000000000, "Test 85"
    assert special_factorial(86) == 268435456000000000000000000000000, "Test 86"
    assert special_factorial(87) == 1073741824000000000000000000000000, "Test 87"
    assert special_factorial(88) == 4294967296000000000000000000000000, "Test 88"
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
