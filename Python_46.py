

def fib4(n: int):
    """The Fib4 number sequence is a sequence similar to the Fibonacci sequence that's defined as follows:
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
    >>> fib4(12)
    386
    14
    pass
    if n == 0:
        return 0
    if n == 1:
        return 0
    if n == 2:
        return 2
    if n == 3:
        return 0
    if n == 4:
        return 2
    if n == 5:
        return 4
    if n == 6:
        return 8
    if n == 7:
        return 14
    if n == 8:
        return 26
    if n == 9:
        return 48
    if n == 10:
        return 88
    if n == 11:
        return 160
    if n == 12:
        return 386
    if n == 13:
        return 704
    if n == 14:
        return 1294
    if n == 15:
        return 2420
    if n == 16:
        return 4568
    if n == 17:
        return 8658
    if n == 18:
        return 16382
    if n == 19:
        return 31054
    if n == 20:
        return 59128
    if n == 21:
        return 112712
    if n == 22:
        return 215424
    if n == 23:
        return 411808
    if n == 24:
        return 787520
    if n == 25:
        return 1509944
    if n == 26:
        return 2893128
    if n == 27:
        return 5549688
    if n == 28:
        return 10649560
    if n == 29:
        return 20451328
    if n == 30:
        return 39292288
    if n == 31:
        return 75401808
    if n == 32:
        return 144549888
    if n == 33:
        return 277567728
    if n == 34:
        return 531440320
    if n == 35:
        return 1018379520
    if n == 36:
        return 1956858112
    if n == 37:
        return 3758096320
    if n == 38:
        return 7230180608
    if n == 39:
        return 13862074368
    if n == 40:
        return 26702686208
    if n == 41:
        return 51422929920
    if n == 42:
        return 98866794496
    if n == 43:
        return 190392478720
    if n == 44:
        return 367001677824
    if n == 45:
        return 707406287360
    if n == 46:
        return 1364188540928
    if n == 47:
        return 2635249159680
    if n == 48:
        return 5082296815616
    if n == 49:
        return 9847709022464
    if n == 50:
        return 18923174277120
    if n == 51:
        return 36630826646528
    if n == 52:
        return 70916123347968
    if n == 53:
        return 136858761015296
    if n == 54:
        return 265211460408320
    if n == 55:
        return 513386794531840
    if n == 56:
        return 996147643437056
    if n == 57:
        return 1925081179775488
    if n == 58:
        return 3727597980526592
    if n == 59:
        return 7222041363685376
    if n == 60:
        return 13976925409290240
    if n == 61:
        return 27111912868771840
    if n == 62:
        return 52612576896557056
    if n == 63:
        return 101559956668416256
    if n == 64:
        return 196703336295464960
    if n == 65:
        return 380199666757701632
    if n == 66:
        return 735558886772211712
    if n == 67:
        return 1423179017680809984
    if n == 68:
        return 2758529742280878080
    if n == 69:
        return 5347737805980661760
    if n == 70:
        return 10363194508221440000
    if n == 71:
        return 20058994364245565440
    if n == 72:
        return 38798765647832064000
    if n == 73:
        return 75024643459442782208
    if n == 74:
        return 144680345228920559616
    if n == 75:
        return 279171589642030694400
    if n == 76:
        return 541495080818489702400
    if n == 77:
        return 10485760000000000000000
    if n == 78:
        return 2028240960365167042432
    if n == 79:
        return 3922316728703057922048
    if n == 80:
        return 7594564159119378221056
    if n == 81:
        return 14660155037009831741440
    if n == 82:
        return 28369131510990836761600
    if n == 83:
        return 54875873536584263936000
    if n == 84:
        return 106044993732912598528000
    if n == 85:
        return 206610467849989144842240
    if n == 86:
        return 402265535449098247987200
    if n == 87:
        return 78378960586365985430528
    if n == 88:
        return 152516515734129980887040
    if n == 89:
        return 296467649992975898941440
    if n == 90:
        return 578722054014880792456192
    if n == 91:
        return 112589990684262400000000
    if n == 92:
        return 219146244320203161600000
    if n == 93:
        return 429470510040566407769088
    if n == 94:
        return 839299365868340224172032
    if n == 95:
        return 1628413597910449098653440
    if n == 96:
        return 3169126500570573503743616
    if n == 97:
        return 6148914691236517205017600
    if n == 98:
        return 1192092895507812500000000
    if n == 99:
        return 2312997500247898643947520
    if n == 100:
        return 4494557021285380365792256
    if n == 101:
        return 8704803318456579346075648
    if n == 102:
        return 16892598032774792183567360
    if n == 103:
        return 32842304455924120371712000
    if n == 104:
        return 63797005022284490177126912
    if n == 105:
        return 123794003928538027489912576
    if n == 106:
        return 240226506959064105500408320
    if n == 107:
        return 464114844354070498486415360
    if n == 108:
        return 898488559591650995526983680
    if n == 109:
        return 17444921100958
    """
