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
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    c = [int(i) for i in input().split()]
    d = [int(i) for i in input().split()]
    e = [int(i) for i in input().split()]
    f = [int(i) for i in input().split()]
    g = [int(i) for i in input().split()]
    h = [int(i) for i in input().split()]
    i = [int(i) for i in input().split()]
    j = [int(i) for i in input().split()]
    k = [int(i) for i in input().split()]
    l = [int(i) for i in input().split()]
    m = [int(i) for i in input().split()]
    o = [int(i) for i in input().split()]
    p = [int(i) for i in input().split()]
    q = [int(i) for i in input().split()]
    r = [int(i) for i in input().split()]
    s = [int(i) for i in input().split()]
    t = [int(i) for i in input().split()]
    u = [int(i) for i in input().split()]
    v = [int(i) for i in input().split()]
    w = [int(i) for i in input().split()]
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    z = [int(i) for i in input().split()]
    aa = [int(i) for i in input().split()]
    ab = [int(i) for i in input().split()]
    ac = [int(i) for i in input().split()]
    ad = [int(i) for i in input().split()]
    ae = [int(i) for i in input().split()]
    af = [int(i) for i in input().split()]
    ag = [int(i) for i in input().split()]
    ah = [int(i) for i in input().split()]
    ai = [int(i) for i in input().split()]
    aj = [int(i) for i in input().split()]
    ak = [int(i) for i in input().split()]
    al = [int(i) for i in input().split()]
    am = [int(i) for i in input().split()]
    ao = [int(i) for i in input().split()]
    ap = [int(i) for i in input().split()]
    aq = [int(i) for i in input().split()]
    ar = [int(i) for i in input().split()]
    as_ = [int(i) for i in input().split()]
    at = [int(i) for i in input().split()]
    au = [int(i) for i in input().split()]
    av = [int(i) for i in input().split()]
    aw = [int(i) for i in input().split()]
    ax = [int(i) for i in input().split()]
    ay = [int(i) for i in input().split()]
    az = [int(i) for i in input().split()]
    ba = [int(i) for i in input().split()]
    bb = [int(i) for i in input().split()]
    bc = [int(i) for i in input().split()]
    bd = [int(i) for i in input().split()]
    be = [int(i) for i in input().split()]
    bf = [int(i) for i in input().split()]
    bg = [int(i) for i in input().split()]
    bh = [int(i) for i in input().split()]
    bi = [int(i) for i in input().split()]
    bj = [int(i) for i in input().split()]
    bk = [int(i) for i in input().split()]
    bl = [int(i) for i in input().split()]
    bm = [int(i) for i in input().split()]
    bo = [int(i) for i in input().split()]
    bp = [int(i) for i in input().split()]
    bq = [int(i) for i in input().split()]
    br = [int(i) for i in input().split()]
    bs = [int(i) for i in input().split()]
    bt = [int(i) for i in input().split()]
    bu = [int(i) for i in input().split()]
    bv = [int(i) for i in input().split()]
    bw = [int(i) for i in input().split()]
    bx = [int(i) for i in input().split()]
    by = [int(i) for i in input().split()]
    bz = [int(i) for i in input().split()]
    ca = [int(i) for i in input().split()]
    cb = [int(i) for i in input().split()]
    cc = [int(i) for i in input().split()]
    cd = [int(i) for i in input().split()]
    ce = [int(i) for i in input().split()]
    cf = [int(i) for i in input().split()]
    cg = [int(i) for i in input().split()]
    ch = [int(i) for i in input().split()]
    ci = [int(i) for i in input().split()]
    cj = [int(i) for i in input().split()]
    ck = [int(i) for i in input().split()]
    cl = [int(i) for i in input().split()]
    cm = [int(i) for i in input().split()]
    co = [int(i) for i in input().split()]
    cp = [int(i) for i in input().split()]
    cq = [int(i) for i in input().split()]
    cr = [int(i) for i in input().split()]
    cs = [int(i) for i in input().split()]
    ct = [int(i) for i in input().split()]
    cu = [int(i) for i in input().split()]
    cv = [int(i) for i in input().split()]
    cw = [int(i) for i in input().split()]
    cx = [int(i) for i in input().split()]
    cy = [int(i) for i in input().split()]
    cz = [int(i) for i in input().split()]
    da = [int(i) for i in input().split()]
    db = [int(i) for i in input().split()]
    dc = [int(i) for i in input().split()]
    dd = [int(i) for i in input().split()]
    de = [int(i) for i in input().split()]
    df = [int(i) for i in input().split()]
    dg = [int(i) for i in input().split()]
    dh = [int(i) for i in input().split()]
    di = [int(i) for i in input().split()]
    dj = [int(i) for i in input().split()]
    dk = [int(i) for i in input().split()]
