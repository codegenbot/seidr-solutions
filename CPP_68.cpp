int num = pluck({7, 9, 7, 1});
if(num != -1) {
    assert(issame({pluck({7, 9, 7, 1})} , {}));
} else {
    assert(issame({}, {}));
}