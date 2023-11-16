
def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is
    a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5

    if is_prime(n):
        return x
    else:


def check(f):
    assert f(2, 2, 0) == 2
    assert f(3, 2, 0) == 2
    assert f(4, 2, 0) == 0
    assert f(5, 2, 0) == 2
    assert f(6, 2, 0) == 0
    assert f(7, 2, 0) == 2
    assert f(8, 2, 0) == 0
    assert f(9, 2, 0) == 0
    assert f(10, 2, 0) == 0
    assert f(11, 2, 0) == 2
    assert f(12, 2, 0) == 0
    assert f(13, 2, 0) == 2
    assert f(14, 2, 0) == 0
    assert f(15, 2, 0) == 0
    assert f(16, 2, 0) == 0
    assert f(17, 2, 0) == 2
    assert f(18, 2, 0) == 0
    assert f(19, 2, 0) == 2
    assert f(20, 2, 0) == 0
    assert f(21, 2, 0) == 0
    assert f(22, 2, 0) == 0
    assert f(23, 2, 0) == 2
    assert f(24, 2, 0) == 0
    assert f(25, 2, 0) == 0
    assert f(26, 2, 0) == 0
    assert f(27, 2, 0) == 0
    assert f(28, 2, 0) == 0
    assert f(29, 2, 0) == 2
    assert f(30, 2, 0) == 0
    assert f(31, 2, 0) == 2
    assert f(32, 2, 0) == 0
    assert f(33, 2, 0) == 0
    assert f(34, 2, 0) == 0
    assert f(35, 2, 0) == 0
    assert f(36, 2, 0) == 0
    assert f(37, 2, 0) == 2
    assert f(38, 2, 0) == 0
    assert f(39, 2, 0) == 0
    assert f(40, 2, 0) == 0
    assert f(41, 2, 0) == 2
    assert f(42, 2, 0) == 0
    assert f(43, 2, 0) == 2
    assert f(44, 2, 0) == 0
    assert f(45, 2, 0) == 0
    assert f(46, 2, 0) == 0
    assert f(47, 2, 0) == 2
    assert f(48, 2, 0) == 0
    assert f(49, 2, 0) == 0
    assert f(50, 2, 0) == 0
    assert f(51, 2, 0) == 0
    assert f(52, 2, 0) == 0
    assert f(53, 2, 0) == 2
    assert f(54, 2, 0) == 0
    assert f(55, 2, 0) == 0
    assert f(56, 2, 0) == 0
    assert f(57, 2, 0) == 0
    assert f(58, 2, 0) == 0
    assert f(59, 2, 0) == 2
    assert f(60, 2, 0) == 0
    assert f(61, 2, 0) == 2
    assert f(62, 2, 0) == 0
    assert f(63, 2, 0) == 0
    assert f(64, 2, 0) == 0
    assert f(65, 2, 0) == 0
    assert f(66, 2, 0) == 0
    assert f(67, 2, 0) == 2
    assert f(68, 2, 0) == 0
    assert f(69, 2, 0) == 0
    assert f(70, 2, 0) == 0
    assert f(71, 2, 0) == 2
    assert f(72, 2, 0) == 0
    assert f(73, 2, 0) == 2
    assert f(74, 2, 0) == 0
    assert f(75, 2, 0) == 0
    assert f(76, 2, 0) == 0
    assert f(77, 2, 0) == 0
    assert f(78, 2, 0) == 0
    assert f(79, 2, 0) == 2
    assert f(80, 2, 0) == 0
    assert f(81, 2, 0) == 0
    assert f(82, 2, 0) == 0
    assert f(83, 2, 0) == 2
    assert f(84, 2, 0) == 0
    assert f(85, 2, 0) == 0
    assert f(86, 2, 0) == 0
    assert f(87, 2, 0) == 0
    assert f(88, 2, 0) == 0
    assert f(89, 2, 0) == 2
    assert f(90, 2, 0) == 0
    assert f(91, 2, 0) == 0
    assert f(92, 2, 0) == 0
    assert f(93, 2, 0) == 0
    assert f(94, 2, 0) == 0
    assert f(95, 2, 0) == 0
    assert f(96, 2, 0) == 0
    assert f(97, 2, 0) == 2
    assert f(98, 2, 0) == 0
    assert f(99, 2, 0) == 0
    assert f(100, 2, 0) == 0


check(x_or_y)
        return y



    # END OF YOUR CODE
    """
