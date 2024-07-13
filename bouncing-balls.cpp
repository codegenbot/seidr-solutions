int main() {
    double sh, fh, bi;
    int bounces;
    cin >> sh >> fh >> bounces;
    
    // Calculate bounciness index
    bi = fh / sh;
    
    // Calculate total distance across bounces
    double totalDistance = sh;
    for (int i = 0; i < bounces; i++) {
        totalDistance += 2 * fh;
        fh *= bi;
    }
    
    cout << totalDistance << endl;
    
    return 0;
}