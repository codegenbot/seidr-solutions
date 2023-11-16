
def is_prime(n):
    """A function that returns True if the given number is prime and False otherwise.

    Examples:
    for is_prime(7) == True
    for is_prime(10) == False
    """
    pass

def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is 
    a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    pass
    if is_prime(n):
        return x
    else:
        return y



def check(program):
    assert program(2, 2, 0) == 2
    assert program(4, 2, 0) == 0
    assert program(5, 2, 0) == 2
    assert program(7, 2, 0) == 2
    assert program(11, 2, 0) == 2
    assert program(13, 2, 0) == 2
    assert program(17, 2, 0) == 2
    assert program(19, 2, 0) == 2
    assert program(23, 2, 0) == 2
    assert program(29, 2, 0) == 2
    assert program(31, 2, 0) == 2
    assert program(37, 2, 0) == 2
    assert program(41, 2, 0) == 2
    assert program(43, 2, 0) == 2
    assert program(47, 2, 0) == 2
    assert program(53, 2, 0) == 2
    assert program(59, 2, 0) == 2
    assert program(61, 2, 0) == 2
    assert program(67, 2, 0) == 2
    assert program(71, 2, 0) == 2
    assert program(73, 2, 0) == 2
    assert program(79, 2, 0) == 2
    assert program(83, 2, 0) == 2
    assert program(89, 2, 0) == 2
    assert program(97, 2, 0) == 2
    assert program(101, 2, 0) == 2
    assert program(103, 2, 0) == 2
    assert program(107, 2, 0) == 2
    assert program(109, 2, 0) == 2
    assert program(113, 2, 0) == 2
    assert program(127, 2, 0) == 2
    assert program(131, 2, 0) == 2
    assert program(137, 2, 0) == 2
    assert program(139, 2, 0) == 2
    assert program(149, 2, 0) == 2
    assert program(151, 2, 0) == 2
    assert program(157, 2, 0) == 2
    assert program(163, 2, 0) == 2
    assert program(167, 2, 0) == 2
    assert program(173, 2, 0) == 2
    assert program(179, 2, 0) == 2
    assert program(181, 2, 0) == 2
    assert program(191, 2, 0) == 2
    assert program(193, 2, 0) == 2
    assert program(197, 2, 0) == 2
    assert program(199, 2, 0) == 2
    assert program(211, 2, 0) == 2
    assert program(223, 2, 0) == 2
    assert program(227, 2, 0) == 2
    assert program(229, 2, 0) == 2
    assert program(233, 2, 0) == 2
    assert program(239, 2, 0) == 2
    assert program(241, 2, 0) == 2
    assert program(251, 2, 0) == 2
    assert program(257, 2, 0) == 2
    assert program(263, 2, 0) == 2
    assert program(269, 2, 0) == 2
    assert program(271, 2, 0) == 2
    assert program(277, 2, 0) == 2
    assert program(281, 2, 0) == 2
    assert program(283, 2, 0) == 2
    assert program(293, 2, 0) == 2
    assert program(307, 2, 0) == 2
    assert program(311, 2, 0) == 2
    assert program(313, 2, 0) == 2
    assert program(317, 2, 0) == 2
    assert program(331, 2, 0) == 2
    assert program(337, 2, 0) == 2
    assert program(347, 2, 0) == 2
    assert program(349, 2, 0) == 2
    assert program(353, 2, 0) == 2
    assert program(359, 2, 0) == 2
    assert program(367, 2, 0) == 2
    assert program(373, 2, 0) == 2
    assert program(379, 2, 0) == 2
    assert program(383, 2, 0) == 2
    assert program(389, 2, 0) == 2
    assert program(397, 2, 0) == 2
    assert program(401, 2, 0) == 2
    assert program(409, 2, 0) == 2
    assert program(419, 2, 0) == 2
    assert program(421, 2, 0) == 2
    assert program(431, 2, 0) == 2
    assert program(433, 2, 0) == 2
    assert program(439, 2, 0) == 2
    assert program(443, 2, 0) == 2
    assert program(449, 2, 0) == 2
    assert program(457, 2, 0) == 2
    assert program(461, 2, 0) == 2
    assert program(463, 2, 0) == 2
    assert program(467, 2, 0) == 2
    assert program(479, 2, 0) == 2
    assert program(487, 2, 0) == 2
    assert program(491, 2, 0) == 2
    assert program(499, 2, 0) == 2
    assert program(503, 2, 0) == 2
    assert program(509, 2, 0) == 2
    assert program(521, 2, 0) == 2
    assert program(523, 2, 0) == 2
    assert program(541, 2, 0) == 2
    assert program(547, 2, 0) == 2
    assert program(557, 2, 0) == 2
    assert program(563, 2, 0) == 2
    assert program(569, 2, 0) == 2
    assert program(571, 2, 0) == 2
    assert program(577, 2, 0) == 2
    assert program(587, 2, 0) == 2
    assert program(593, 2, 0) == 2
    assert program(599, 2, 0) == 2
    assert program(601, 2, 0) == 2
    assert program(607, 2, 0) == 2
    assert program(613, 2, 0) == 2
    assert program(617, 2, 0) == 2
    assert program(619, 2, 0) == 2
    assert program(631, 2, 0) == 2
    assert program(641, 2, 0) == 2
    assert program(643, 2, 0) == 2
    assert program(647, 2, 0) == 2
    assert program(653, 2, 0) == 2
    assert program(659, 2, 0) == 2
    assert program(661, 2, 0) == 2
    assert program(673, 2, 0) == 2
    assert program(677, 2, 0) == 2
    assert program(683, 2, 0) == 2
    assert program(691, 2, 0) == 2
    assert program(701, 2, 0) == 2
    assert program(709, 2, 0) == 2
    assert program(719, 2, 0) == 2
    assert program(727, 2, 0) == 2
    assert program(733, 2, 0) == 2
    assert program(739, 2, 0) == 2
    assert program(743, 2, 0) == 2
    assert program(751, 2, 0) == 2
    assert program(757, 2, 0) == 2
    assert program(761, 2, 0) == 2
    assert program(769, 2, 0) == 2
    assert program(773, 2, 0) == 2
    assert program(787, 2, 0) == 2
    assert program(797, 2, 0) == 2
    assert program(809, 2, 0) == 2
    assert program(811, 2, 0) == 2
    assert program(821, 2, 0) == 2

    for x_or_y(15, 8, 5) == 5
    
    """
