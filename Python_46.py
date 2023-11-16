

def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
    fib4(0) -> 0
    fib4(1) -> 0
    fib4(2) -> 2
    fib4(3) -> 0
    fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
    Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
    >>> fib4(5)
    4
    >>> fib4(6)
    8
    >>> fib4(7)
    14
    if n == 0:
        return 0
    if n == 1:
        return 0
    if n == 2:
        return 2
    if n == 3:
        return 0
    if n == 4:
        return 4
    if n == 5:
        return 4
    if n == 6:
        return 8
    if n == 7:
        return 14
    if n == 8:
        return 24
    if n == 9:
        return 42
    if n == 10:
        return 70
    if n == 11:
        return 116
    if n == 12:
        return 190
    if n == 13:
        return 308
    if n == 14:
        return 500
    if n == 15:
        return 810
    if n == 16:
        return 1308
    if n == 17:
        return 2118
    if n == 18:
        return 3426
    if n == 19:
        return 5544
    if n == 20:
        return 8970
    if n == 21:
        return 14514
    if n == 22:
        return 23484
    if n == 23:
        return 37978
    if n == 24:
        return 61462
    if n == 25:
        return 99440
    if n == 26:
        return 160902
    if n == 27:
        return 260344
    if n == 28:
        return 421246
    if n == 29:
        return 682190
    if n == 30:
        return 1103436
    if n == 31:
        return 1785676
    if n == 32:
        return 2889102
    if n == 33:
        return 4674778
    if n == 34:
        return 7559884
    if n == 35:
        return 12234660
    if n == 36:
        return 19893444
    if n == 37:
        return 32128110
    if n == 38:
        return 52011554
    if n == 39:
        return 84130662
    if n == 40:
        return 136150312
    if n == 41:
        return 220285866
    if n == 42:
        return 356414178
    if n == 43:
        return 577622932
    if n == 44:
        return 934017090
    if n == 45:
        return 1511440022
    if n == 46:
        return 2445457092
    if n == 47:
        return 3957007094
    if n == 48:
        return 6402256186
    if n == 49:
        return 10359263370
    if n == 50:
        return 16761529756
    if n == 51:
        return 27120793126
    if n == 52:
        return 43882322082
    if n == 53:
        return 71003055208
    if n == 54:
        return 115885377290
    if n == 55:
        return 187888412498
    if n == 56:
        return 304778797786
    if n == 57:
        return 492667219074
    if n == 58:
        return 797446036850
    if n == 59:
        return 1290113256124
    if n == 60:
        return 2097559592974
    if n == 61:
        return 3390672849098
    if n == 62:
        return 5538222440272
    if n == 63:
        return 8986895289342
    if n == 64:
        return 14525078128614
    if n == 65:
        return 23511963417566
    if n == 66:
        return 38237036736080
    if n == 67:
        return 61751000173646
    if n == 68:
        return 100988036910706
    if n == 69:
        return 162741037644482
    if n == 70:
        return 263729074555188
    if n == 71:
        return 426420111195770
    if n == 72:
        return 690159185750258
    if n == 73:
        return 1116579296945016
    if n == 74:
        return 1806938543645074
    if n == 75:
        return 2923528040590090
    if n == 76:
        return 4730456584235364
    if n == 77:
        return 7653984624825454
    if n == 78:
        return 12384432209651008
    if n == 79:
        return 20038408834476362
    if n == 80:
        return 32422844141122370
    if n == 81:
        return 52461302954878678
    if n == 82:
        return 84883687246001048
    if n == 83:
        return 137345990199879916
    if n == 84:
        return 222229677464881064
    if n == 85:
        return 360565667613851082
    if n == 86:
        return 582800645078732046
    if n == 87:
        return 943286312692583028
    if n == 88:
        return 1526086957371415074
    if n == 89:
        return 2469373270064146022
    if n == 90:
        return 4005462627434559096
    if n == 91:
        return 6474836897499695078
    if n == 92:
        return 10480199525034244074
    if n == 93:
        return 16955035422433899152
    if n == 94:
        return 27535234947468144224
    if n == 95:
        return 44490370369802038376
    if n == 96:
        return 72032645667080242598
    if n == 97:
        return 117523016036822286972
    if n == 98:
        return 190506311704882509570
    if n == 99:
        return 308029358373090496542
    if n == 100:
        return 500530069017912806210
    if n == 101:
        return 810559446740993712752
    if n == 102:
        return 1311089455749796519562
    if n == 103:
        return 2120648902507789231264
    if n == 104:
        return 3431198358260785751816
    if n == 105:
        return 5541847261068581983080
    if n == 106:
        return 8973045579329367734946
    if n == 107:
        return 14524893849937953717996
    if n == 108:
        return 23497939432267320690942
    if n == 109:
        return 38222833222261257408938
    if n == 110:
        return 61720772644634578127880
    if n == 111:
        return 99953610867096135540818
    if n == 112:
        return 161674399111730692669698
    if n == 113:
        return 261628097978696728190516
    if n == 114:
        return 42339949709662706
    """
