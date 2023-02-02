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
    a.sort()
    print(a)
    b = []
    for i in range(len(a)):
        if i == 0:
            b.append(a[i])
        else:
            b.append(a[i] - a[i-1])
    print(b)
    c = []
    for i in range(len(b)):
        if i == 0:
            c.append(b[i])
        else:
            c.append(b[i] + c[i-1])
    print(c)
    d = []
    for i in range(len(c)):
        if i == 0:
            d.append(c[i])
        else:
            d.append(c[i] - c[i-1])
    print(d)
    e = []
    for i in range(len(d)):
        if i == 0:
            e.append(d[i])
        else:
            e.append(d[i] + e[i-1])
    print(e)
    f = []
    for i in range(len(e)):
        if i == 0:
            f.append(e[i])
        else:
            f.append(e[i] - e[i-1])
    print(f)
    g = []
    for i in range(len(f)):
        if i == 0:
            g.append(f[i])
        else:
            g.append(f[i] + g[i-1])
    print(g)
    h = []
    for i in range(len(g)):
        if i == 0:
            h.append(g[i])
        else:
            h.append(g[i] - g[i-1])
    print(h)
    i = []
    for i in range(len(h)):
        if i == 0:
            i.append(h[i])
        else:
            i.append(h[i] + i[i-1])
    print(i)
    j = []
    for i in range(len(i)):
        if i == 0:
            j.append(i[i])
        else:
            j.append(i[i] - i[i-1])
    print(j)
    k = []
    for i in range(len(j)):
        if i == 0:
            k.append(j[i])
        else:
            k.append(j[i] + k[i-1])
    print(k)
    l = []
    for i in range(len(k)):
        if i == 0:
            l.append(k[i])
        else:
            l.append(k[i] - k[i-1])
    print(l)
    m = []
    for i in range(len(l)):
        if i == 0:
            m.append(l[i])
        else:
            m.append(l[i] + m[i-1])
    print(m)
    o = []
    for i in range(len(m)):
        if i == 0:
            o.append(m[i])
        else:
            o.append(m[i] - m[i-1])
    print(o)
    p = []
    for i in range(len(o)):
        if i == 0:
            p.append(o[i])
        else:
            p.append(o[i] + p[i-1])
    print(p)
    q = []
    for i in range(len(p)):
        if i == 0:
            q.append(p[i])
        else:
            q.append(p[i] - p[i-1])
    print(q)
    r = []
    for i in range(len(q)):
        if i == 0:
            r.append(q[i])
        else:
            r.append(q[i] + r[i-1])
    print(r)
    s = []
    for i in range(len(r)):
        if i == 0:
            s.append(r[i])
        else:
            s.append(r[i] - r[i-1])
    print(s)
    t = []
    for i in range(len(s)):
        if i == 0:
            t.append(s[i])
        else:
            t.append(s[i] + t[i-1])
    print(t)
    u = []
    for i in range(len(t)):
        if i == 0:
            u.append(t[i])
        else:
            u.append(t[i] - t[i-1])
    print(u)
    v = []
    for i in range(len(u)):
        if i == 0:
            v.append(u[i])
        else:
            v.append(u[i] + v[i-1])
    print(v)
    w = []
    for i in range(len(v)):
        if i == 0:
            w.append(v[i])
        else:
            w.append(v[i] - v[i-1])
    print(w)
    x = []
    for i in range(len(w)):
        if i == 0:
            x.append(w[i])
        else:
            x.append(w[i] + x[i-1])
    print(x)
    y = []
    for i in range(len(x)):
        if i == 0:
            y.append(x[i])
        else:
            y.append(x[i] - x[i-1])
    print(y)
    z = []
    for i in range(len(y)):
        if i == 0:
            z.append(y[i])
        else:
            z.append(y[i] + z[i-1])
    print(z)
    aa = []
    for i in range(len(z)):
        if i == 0:
            aa.append(z[i])
        else:
            aa.append(z[i] - z[i-1])
    print(aa)
    bb = []
    for i in range(len(aa)):
        if i == 0:
            bb.append(aa[i])
        else:
            bb.append(aa[i] + bb[i-1])
    print(bb)
    cc = []
    for i in range(len(bb)):
        if i == 0:
            cc.append(bb[i])
        else:
            cc.append(bb[i] - bb[i-1])
    print(cc)
    dd = []
    for i in range(len(cc)):
        if i == 0:
            dd.append(cc[i])
        else:
            dd.append(cc[i] + dd[i-1])
    print(dd)
    ee = []
    for i in range(len(dd)):
        if i == 0:
            ee.append(dd[i])
        else:
            ee.append(dd[i] - dd[i-1])
    print(ee)
    ff = []
    for i in range(len(ee
