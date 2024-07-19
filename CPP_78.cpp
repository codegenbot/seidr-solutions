int main(){
    assert(hex_key("") == 0);
    assert(hex_key("123456789ABCDEF") == 8);
    assert(hex_key("ABCXYZ") == 3);

    return 0;
}