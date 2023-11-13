
def get_max_triples(n):
    """
    You are given a positive integer n. You have to create an integer array a of length n.
        For each i (1 ≤ i ≤ n), the value of a[i] = i * i - i + 1.
        Return the number of triples (a[i], a[j], a[k]) of a where i < j < k, 
    and a[i] + a[j] + a[k] is a multiple of 3.

    Example :
        Input: n = 5
        Output: 1
        Explanation: 
        a = [1, 3, 7, 13, 21]
        The only valid triple is (1, 7, 13).
    pass
    a = []
    for i in range(1, n + 1):
        a.append(i * i - i + 1)
    return a


def check(fn):
    assert fn(100) == 53361
    assert fn(1) == 0
    assert fn(2) == 0
    assert fn(3) == 1
    assert fn(4) == 1
    assert fn(5) == 1
    assert fn(6) == 2
    assert fn(7) == 2
    assert fn(8) == 2
    assert fn(9) == 3
    assert fn(10) == 3
    assert fn(11) == 3
    assert fn(12) == 4
    assert fn(13) == 4
    assert fn(14) == 4
    assert fn(15) == 5
    assert fn(16) == 5
    assert fn(17) == 5
    assert fn(18) == 6
    assert fn(19) == 6
    assert fn(20) == 6
    assert fn(21) == 7
    assert fn(22) == 7
    assert fn(23) == 7
    assert fn(24) == 8
    assert fn(25) == 8
    assert fn(26) == 8
    assert fn(27) == 9
    assert fn(28) == 9
    assert fn(29) == 9
    assert fn(30) == 10
    assert fn(31) == 10
    assert fn(32) == 10
    assert fn(33) == 11
    assert fn(34) == 11
    assert fn(35) == 11
    assert fn(36) == 12
    assert fn(37) == 12
    assert fn(38) == 12
    assert fn(39) == 13
    assert fn(40) == 13
    assert fn(41) == 13
    assert fn(42) == 14
    assert fn(43) == 14
    assert fn(44) == 14
    assert fn(45) == 15
    assert fn(46) == 15
    assert fn(47) == 15
    assert fn(48) == 16
    assert fn(49) == 16
    assert fn(50) == 16
    assert fn(51) == 17
    assert fn(52) == 17
    assert fn(53) == 17
    assert fn(54) == 18
    assert fn(55) == 18
    assert fn(56) == 18
    assert fn(57) == 19
    assert fn(58) == 19
    assert fn(59) == 19
    assert fn(60) == 20
    assert fn(61) == 20
    assert fn(62) == 20
    assert fn(63) == 21
    assert fn(64) == 21
    assert fn(65) == 21
    assert fn(66) == 22
    assert fn(67) == 22
    assert fn(68) == 22
    assert fn(69) == 23
    assert fn(70) == 23
    assert fn(71) == 23
    assert fn(72) == 24
    assert fn(73) == 24
    assert fn(74) == 24
    assert fn(75) == 25
    assert fn(76) == 25
    assert fn(77) == 25
    assert fn(78) == 26
    assert fn(79) == 26
    assert fn(80) == 26
    assert fn(81) == 27
    assert fn(82) == 27
    assert fn(83) == 27
    assert fn(84) == 28
    assert fn(85) == 28
    assert fn(86) == 28
    assert fn(87) == 29
    assert fn(88) == 29
    assert fn(89) == 29
    assert fn(90) == 30
    assert fn(91) == 30
    assert fn(92) == 30
    assert fn(93) == 31
    assert fn(94) == 31
    assert fn(95) == 31
    assert fn(96) == 32
    assert fn(97) == 32
    assert fn(98) == 32
    assert fn(99) == 33
    assert fn(100) == 33


if __name__ == "__main__":
    check(get_max_triples)
    """
