
[SEED]
#<COMMON_CODE>
def get_coins(cents):
    coins = []
    while cents > 0:
        if cents >= 25:
            coins.append(25)
            cents -= 25
        elif cents >= 10:
            coins.append(10)
            cents -= 10
        elif cents >= 5:
            coins.append(5)
            cents -= 5
        else:
            coins.append(cents)
            cents = 0
    return coins
#</COMMON_CODE>
[SEED]
def get_coins(cents):
    return [cents]
[/SEED]
[TEST]
>>> get_coins(1)
[1]
>>> get_coins(2)
[2]
>>> get_coins(3)
[3]
>>> get_coins(4)
[4]
>>> get_coins(5)
[0, 1, 0, 0]
>>> get_coins(6)
[0, 2, 0, 0]
>>> get_coins(7)
[1, 2, 0, 0]
>>> get_coins(8)
[3, 2, 0, 0]
>>> get_coins(9)
[4, 2, 0, 0]
>>> get_coins(10)
[5, 2, 0, 0]
>>> get_coins(11)
[6, 2, 0, 0]
>>> get_coins(12)
[7, 2, 0, 0]
>>> get_coins(13)
[8, 2, 0, 0]
>>> get_coins(14)
[9, 2, 0, 0]
>>> get_coins(15)
[0, 3, 0, 0]
>>> get_coins(16)
[1, 3, 0, 0]
>>> get_coins(17)
[2, 3, 0, 0]
>>> get_coins(18)
[3, 3, 0, 0]
>>> get_coins(19)
[4, 3, 0, 0]
>>> get_coins(20)
[5, 3, 0, 0]
>>> get_coins(21)
[6, 3, 0, 0]
>>> get_coins(22)
[7, 3, 0, 0]
>>> get_coins(23)
[8, 3, 0, 0]
>>> get_coins(24)
[9, 3, 0, 0]
>>> get_coins(25)
[0, 4, 0, 0]
>>> get_coins(26)
[1, 4, 0, 0]
>>> get_coins(27)
[2, 4, 0, 0]
>>> get_coins(28)
[3, 4, 0, 0]
>>> get_coins(29)
[4, 4, 0, 0]
>>> get_coins(30)
[5, 4, 0, 0]
>>> get_coins(31)
[6, 4, 0, 0]
>>> get_coins(32)
[7, 4, 0, 0]
>>> get_coins(33)
[8, 4, 0, 0]
>>> get_coins(34)
[9, 4, 0, 0]
>>> get_coins(35)
[0, 0, 1, 0]
>>> get_coins(36)
[1, 0, 1, 0]
>>> get_coins(37)
[2, 0, 1, 0]
>>> get_coins(38)
[3, 0, 1, 0]
>>> get_coins(39)
[4, 0, 1, 0]
>>> get_coins(40)
[5, 0, 1, 0]
>>> get_coins(41)
[6, 0, 1, 0]
>>> get_coins(42)
[7, 0, 1, 0]
>>> get_coins(43)
[8, 0, 1, 0]
>>> get_coins(44)
[9, 0, 1, 0]
>>> get_coins(45)
[0, 1, 1, 0]
>>> get_coins(46)
[1, 1, 1, 0]
>>> get_coins(47)
[2, 1, 1, 0]
>>> get_coins(48)
[3, 1, 1, 0]
>>> get_coins(49)
[4, 1, 1, 0]
>>> get_coins(50)
[5, 1, 1, 0]
>>> get_coins(51)
[6, 1, 1, 0]
>>> get_coins(52)
[7, 1, 1, 0]
>>> get_coins(53)
[8, 1, 1, 0]
>>> get_coins(54)
[9, 1, 1, 0]
>>> get_coins(55)
[0, 2, 1, 0]
>>> get_coins(56)
[1, 2, 1, 0]
>>> get_coins(57)
[2, 2, 1, 0]
>>> get_coins(58)
[3, 2, 1, 0]
>>> get_coins(59)
[4, 2, 1, 0]
>>> get_coins(60)
[5, 2, 1, 0]
>>> get_coins(61)
[6, 2, 1, 0]
>>> get_coins(62)
[7, 2, 1, 0]
>>> get_coins(63)
[8, 2, 1, 0]
>>> get_coins(64)
[9, 2, 1, 0]
>>> get_coins(65)
[0, 3, 1, 0]
>>> get_coins(66)
[1, 3, 1, 0]
>>> get_coins(67)
[2, 3, 1, 0]
>>> get_coins(68)
[3, 3, 1, 0]
>>> get_coins(69)
[4, 3, 1, 0]
>>> get_coins(70)
[5, 3, 1, 0]
>>> get_coins(71)
[6, 3, 1, 0]
>>> get_coins(72)
[7, 3, 1, 0]
>>> get_coins(73)
[8, 3, 1, 0]
>>> get_coins(74)
[9, 3, 1, 0]
>>> get_coins(75)
[0, 0, 2, 1]
>>> get_coins(76)
[1, 0, 2, 1]
>>> get_coins(77)
[2, 0, 2, 1]
>>> get_coins(78)
[3, 0, 2, 1]
>>> get_coins(79)
[4, 0, 2, 1]
>>> get_coins(80)
[5, 0, 2, 1]
>>> get_coins(81)
[6, 0, 2, 1]
>>> get_coins(82)
[7, 0, 2, 1]
>>> get_coins(83)
[8, 0, 2, 1]
>>> get_coins(84)
[9, 0, 2, 1]
>>> get_coins(85)
[0, 1, 2, 1]
>>> get_coins(86)
[1, 1, 2, 1]
>>> get_coins(87)
[2, 1, 2, 1]
>>> get_coins(88)
[3, 1, 2, 1]
>>> get_coins(89)
[4, 1, 2, 1]
>>> get_coins(90)
[5, 1, 2, 1]
>>> get_coins(91)
[6, 1, 2, 1]
>>> get_coins(92)
[7, 1, 2, 1]
>>> get_coins(93)
[8, 1, 2, 1]
>>> get_coins(94)
[9, 1, 2, 1]
>>> get_coins(95)
[0, 2, 2, 1]
>>> get_coins(96)
[1, 2, 2, 1]
>>> get_coins(97)
[2, 2, 2, 1]
>>> get_coins(98)
[3, 2, 2, 1]
>>> get_coins(99)
[4, 2, 2, 1]
>>> get_coins(100)
[5, 2, 2, 1]
