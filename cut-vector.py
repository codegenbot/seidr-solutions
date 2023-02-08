import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
"""
if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    c = [int(x) for x in input().split()]
    d = [int(x) for x in input().split()]
    e = [int(x) for x in input().split()]
    f = [int(x) for x in input().split()]
    g = [int(x) for x in input().split()]
    h = [int(x) for x in input().split()]
    i = [int(x) for x in input().split()]
    j = [int(x) for x in input().split()]
    k = [int(x) for x in input().split()]
    l = [int(x) for x in input().split()]
    m = [int(x) for x in input().split()]
    o = [int(x) for x in input().split()]
    p = [int(x) for x in input().split()]
    q = [int(x) for x in input().split()]
    r = [int(x) for x in input().split()]
    s = [int(x) for x in input().split()]
    t = [int(x) for x in input().split()]
    u = [int(x) for x in input().split()]
    v = [int(x) for x in input().split()]
    w = [int(x) for x in input().split()]
    x = [int(x) for x in input().split()]
    y = [int(x) for x in input().split()]
    z = [int(x) for x in input().split()]
    aa = [int(x) for x in input().split()]
    ab = [int(x) for x in input().split()]
    ac = [int(x) for x in input().split()]
    ad = [int(x) for x in input().split()]
    ae = [int(x) for x in input().split()]
    af = [int(x) for x in input().split()]
    ag = [int(x) for x in input().split()]
    ah = [int(x) for x in input().split()]
    ai = [int(x) for x in input().split()]
    aj = [int(x) for x in input().split()]
    ak = [int(x) for x in input().split()]
    al = [int(x) for x in input().split()]
    am = [int(x) for x in input().split()]
    ao = [int(x) for x in input().split()]
    ap = [int(x) for x in input().split()]
    aq = [int(x) for x in input().split()]
    ar = [int(x) for x in input().split()]
    as_ = [int(x) for x in input().split()]
    at = [int(x) for x in input().split()]
    au = [int(x) for x in input().split()]
    av = [int(x) for x in input().split()]
    aw = [int(x) for x in input().split()]
    ax = [int(x) for x in input().split()]
    ay = [int(x) for x in input().split()]
    az = [int(x) for x in input().split()]
    ba = [int(x) for x in input().split()]
    bb = [int(x) for x in input().split()]
    bc = [int(x) for x in input().split()]
    bd = [int(x) for x in input().split()]
    be = [int(x) for x in input().split()]
    bf = [int(x) for x in input().split()]
    bg = [int(x) for x in input().split()]
    bh = [int(x) for x in input().split()]
    bi = [int(x) for x in input().split()]
    bj = [int(x) for x in input().split()]
    bk = [int(x) for x in input().split()]
    bl = [int(x) for x in input().split()]
    bm = [int(x) for x in input().split()]
    bo = [int(x) for x in input().split()]
    bp = [int(x) for x in input().split()]
    bq = [int(x) for x in input().split()]
    br = [int(x) for x in input().split()]
    bs = [int(x) for x in input().split()]
    bt = [int(x) for x in input().split()]
    bu = [int(x) for x in input().split()]
    bv = [int(x) for x in input().split()]
    bw = [int(x) for x in input().split()]
    bx = [int(x) for x in input().split()]
    by = [int(x) for x in input().split()]
    bz = [int(x) for x in input().split()]
    ca = [int(x) for x in input().split()]
    cb = [int(x) for x in input().split()]
    cc = [int(x) for x in input().split()]
    cd = [int(x) for x in input().split()]
    ce = [int(x) for x in input().split()]
    cf = [int(x) for x in input().split()]
    cg = [int(x) for x in input().split()]
    ch = [int(x) for x in input().split()]
    ci = [int(x) for x in input().split()]
    cj = [int(x) for x in input().split()]
    ck = [int(x) for x in input().split()]
    cl = [int(x) for x in input().split()]
    cm = [int(x) for x in input().split()]
    co = [int(x) for x in input().split()]
    cp = [int(x) for x in input().split()]
    cq = [int(x) for x in input().split()]
    cr = [int(x) for x in input().split()]
    cs = [int(x) for x in input().split()]
    ct = [int(x) for x in input().split()]
    cu = [int(x) for x in input().split()]
    cv = [int(x) for x in input().split()]
    cw = [int(x) for x in input().split()]
    cx = [int(x) for x in input().split()]
    cy = [int(x) for x in input().split()]
    cz = [int(x) for x in input().split()]
    da = [int(x) for x in input().split()]
    db = [int(x) for x in input().split()]
    dc = [int(x) for x in input().split()]
    dd = [int(x) for x in input().split()]
    de = [int(x) for x in input().split()]
    df = [int(x) for x in input().split()]
    dg = [int(x) for x in input().split()]
    dh = [int(x) for x in input().split()]
    di = [int(x) for x in input().split()]
    dj = [int(x) for x in input().split()]
    dk = [int(x) for x in input().split()]
